try:
    a,b,c=6,5,1
    def f(b):
        a=3
        b*=1
        c=2
        return a+b+c
    
    a,b,c=0,8,9
    print(f(a),a,b,c)
    
except: print('error')
