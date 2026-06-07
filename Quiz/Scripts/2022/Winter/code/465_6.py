try:
    a,b,c=0,5,8
    def f(b):
        a+=2
        b=5
        c=3
        return a+b+c
    
    a,b,c=9,6,0
    print(f(a),a,b,c)
    
except: print('error')
