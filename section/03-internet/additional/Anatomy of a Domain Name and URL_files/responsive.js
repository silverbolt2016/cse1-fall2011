jQuery( '#toggle-navigation' ).click(function() {
          jQuery( '#mobile-nav' ).slideToggle( 'fast', function() {
                return false;
            // Animation complete.
          });
        });

