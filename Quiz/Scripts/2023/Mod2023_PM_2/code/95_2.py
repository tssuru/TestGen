try:
    a,b,c=1,8,0
    def f(a):
        a-=3
        b=1
        c=2
        return a+b+c
    
    a,b,c=7,5,3
    print(f(a),a,b,c)
    
except: print('error')
