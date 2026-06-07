try:
    a,b,c=9,3,6
    def f(a):
        global c
        a=3
        b*=5
        c=2
        return a+b+c
    
    a,b,c=1,0,8
    print(f(a),a,b,c)
    
except: print('error')
