try:
    a,b,c=3,6,8
    def f(a):
        global c
        a*=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=9,1,0
    print(f(a),a,b,c)
    
except: print('error')
