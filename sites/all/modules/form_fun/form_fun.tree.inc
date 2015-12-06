<?php
function form_fun_tree($form,&$form_state)
{
	$form=array();
	$form['home']=array(
			'#type'=>'fieldset',
			'#title'=>t('Home Address'),
		);
	$form['home']['street']=array(
			'#type'=>'textfield',
			'#title'=>t('Street Address'),
		);

	$form['home']['city']=array(
			'#type'=>'textfield',
			'#title'=>t('City'),
		);
	$form['addWorkAddress']=array(
			'#type'=>'checkbox',
			'#title'=>t('Add work address'),
		);

	$form['workContainer']=array(
			'#type'=>'container',
			//'#title'=>t('Work Address'),
			'#states'=>array(
					'visible'=>array(
							':input[name="addWorkAddress"]'=>array('checked'=>TRUE),
						),
				),
		);
	$form['workContainer']['work']=array(
			'#type'=>'fieldset',
			'#title'=>t('Work Address'),			
		);
	$form['workContainer']['work']['street']=array(
			'#type'=>'textfield',
			'#title'=>t('Street Address'),
		);
	$form['workContainer']['work']['city']=array(
			'#type'=>'textfield',
			'#title'=>t('City'),
		);

	$form['Submit']=array(
			'#type'=>'submit',
			'#value'=>'Submit'
		);
	$form['#tree']=TRUE;
	return $form;
}
function form_fun_tree_validate($form,&$form_state)
{
	dsm($form_state);

}