try:
    a,b,c=0,7,1
    def f(a):
        a=3
        b=5
        c=1
        return a+b+c
    
    a,b,c=9,8,5
    print(f(a),a,b,c)
    
except: print('error')
