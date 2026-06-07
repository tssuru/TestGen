try:
    a,b,c=7,1,8
    def f(a):
        global c
        a-=2
        b=5
        c=1
        return a+b+c
    
    a,b,c=0,5,6
    print(f(a),a,b,c)
    
except: print('error')
