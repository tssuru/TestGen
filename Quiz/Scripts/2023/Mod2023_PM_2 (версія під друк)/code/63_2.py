try:
    a,b,c=9,8,7
    def f(a):
        global c
        a=5
        b*=3
        c=2
        return a+b+c
    
    a,b,c=2,0,4
    print(f(a),a,b,c)
    
except: print('error')
