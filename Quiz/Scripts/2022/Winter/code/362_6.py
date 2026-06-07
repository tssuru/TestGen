try:
    a,b,c=6,1,2
    def f(a):
        global c
        a+=2
        b=3
        c=1
        return a+b+c
    
    a,b,c=8,2,3
    print(f(a),a,b,c)
    
except: print('error')
