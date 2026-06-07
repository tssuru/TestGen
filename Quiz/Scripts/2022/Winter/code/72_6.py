try:
    a,b,c=2,8,7
    def f(a):
        a-=1
        b=4
        c=3
        return a+b+c
    
    a,b,c=1,0,6
    print(f(a),a,b,c)
    
except: print('error')
