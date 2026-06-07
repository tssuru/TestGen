try:
    a,b,c=1,2,5
    def f(a):
        a*=5
        b=4
        c=2
        return a+b+c
    
    a,b,c=0,2,1
    print(f(a),a,b,c)
    
except: print('error')
