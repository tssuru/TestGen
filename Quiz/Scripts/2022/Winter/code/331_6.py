try:
    a,b,c=5,1,7
    def f(a):
        a-=1
        b=3
        c=1
        return a+b+c
    
    a,b,c=0,7,4
    print(f(a),a,b,c)
    
except: print('error')
