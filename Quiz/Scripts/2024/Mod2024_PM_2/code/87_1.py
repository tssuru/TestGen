try:
    a,b,c=5,9,7
    def f(a):
        global c
        a-=2
        b=1
        c=3
        return a+b+c
    
    a,b,c=1,3,8
    print(f(a),a,b,c)
    
except: print('error')
