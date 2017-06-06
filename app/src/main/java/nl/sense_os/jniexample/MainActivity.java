package nl.sense_os.jniexample;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    private TextView mTvInfo;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        mTvInfo = (TextView) findViewById(R.id.tv_info);

        loadSecretInfo();
    }

    private void loadSecretInfo() {
        String message = SecretLib.getFirstSecret() + ", " + SecretLib.getSecondSecret();
        mTvInfo.setText(message);
    }
}
