try:
    a,b,c=2,6,4
    def f(b):
        a=2
        b*=3
        c=1
        return a+b+c
    
    a,b,c=3,0,8
    print(f(a),a,b,c)
    
except: print('error')
