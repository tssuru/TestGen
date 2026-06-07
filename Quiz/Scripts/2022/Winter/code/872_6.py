try:
    a,b,c=2,3,1
    def f(a):
        global c
        a=5
        b-=5
        c=2
        return a+b+c
    
    a,b,c=7,0,8
    print(f(a),a,b,c)
    
except: print('error')
