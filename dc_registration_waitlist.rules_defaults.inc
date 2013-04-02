<?php
/**
 * @file
 * dc_registration_waitlist.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dc_registration_waitlist_default_rules_configuration() {
  $items = array();
  $items['rules_dc_registration_waitlist_send_email'] = entity_import('rules_config', '{ "rules_dc_registration_waitlist_send_email" : {
      "LABEL" : "dc registration waitlist send email",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "user" : { "label" : "User", "type" : "user" },
        "product" : { "label" : "Product", "type" : "commerce_product" }
      },
      "DO" : [
        { "mail" : {
            "to" : "[user:mail]",
            "subject" : "Message from [site:name]",
            "message" : "Hi [user:name]\\r\\n\\r\\nProduct [product:title] is now available for purchase. Click on this link [site:login-url]\\/login?destination=dc-registration-waitlist\\/addtocart\\/[product:product-id] and login with your username. You will then be redirected to the checkout.\\r\\n\\r\\n[site:name]",
            "from" : "[site:mail]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
