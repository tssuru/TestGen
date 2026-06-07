try:
    a,b,c=2,0,3
    def f(a):
        a=5
        b-=3
        c=4
        return a+b+c
    
    a,b,c=1,5,8
    print(f(a),a,b,c)
    
except: print('error')
