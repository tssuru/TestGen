try:
    a,b,c=2,5,4
    def f(a):
        a=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=9,8,1
    print(f(a),a,b,c)
    
except: print('error')
