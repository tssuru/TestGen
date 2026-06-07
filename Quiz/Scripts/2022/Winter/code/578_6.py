try:
    a,b,c=7,8,3
    def f(a):
        global c
        a=2
        b+=3
        c=1
        return a+b+c
    
    a,b,c=9,6,1
    print(f(a),a,b,c)
    
except: print('error')
