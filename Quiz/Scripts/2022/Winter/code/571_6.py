try:
    a,b,c=6,3,1
    def f(a):
        global c
        a+=2
        b=4
        c=1
        return a+b+c
    
    a,b,c=9,0,4
    print(f(a),a,b,c)
    
except: print('error')
