package com.intellif.sdk;

import android.os.Bundle;

import com.google.android.material.snackbar.Snackbar;

import androidx.appcompat.app.AppCompatActivity;

import android.util.Log;
import android.view.View;

import androidx.navigation.NavController;
import androidx.navigation.Navigation;
import androidx.navigation.ui.AppBarConfiguration;
import androidx.navigation.ui.NavigationUI;

import com.intellif.ifFaceSdkJni.IFFaceSdkJni;
import com.intellif.sdk.databinding.ActivityMainBinding;

import android.view.Menu;
import android.view.MenuItem;

public class MainActivity extends AppCompatActivity {


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        String version = IFFaceSdkJni.getInstance().ifGetVersion();
        String sig = IFFaceSdkJni.getInstance().ifGetSignature();
        Log.e("tag",  "version is " + version + " sig " + sig);
    }


}