<?php if ($page): ?>
  <div id="bm_content">
    <?php hide($content['field_bm_linked_page']); ?>
    <?php hide($content['edit_link']); ?>
    <?php hide($content['print_link']); ?>

    <h1><?php print $title ?></h1>
    <?php print render($content); ?>

    <!--Floating actions button -->
    <div class="fixed-action-btn">
      <a class="btn-floating btn-large backend-red">
        <i class="large icon-add"></i>
      </a>
      <ul class="fixed-actions-nav">
      <?php if ($content['field_bm_linked_page']): ?>
        <li>
          <?php print render($content['field_bm_linked_page']); ?>
        </li>
      <?php endif; ?>
        <li>
          <?php print render($content['print_link']) ?>
        </li>
      <?php if ($content['edit_link']): ?>
        <li>
          <?php print render($content['edit_link']); ?>
        </li>
      <?php endif; ?>
      </ul>
    </div>
  </div>
<?php else: ?>

  <i class="icon-chevron-right"></i><a class="bm-text-link" href="<?php print $node_url ?>"><?php print $title ?></a>
  <?php if (isset($content['field_bm_subtitle'])): ?>
    : <?php print render($content['field_bm_subtitle']); ?>
  <?php endif; ?>

<?php endif; ?>