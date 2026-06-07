try:
    a,b,c=4,7,5
    def f(a):
        global c
        a+=4
        b=3
        c=1
        return a+b+c
    
    a,b,c=0,2,3
    print(f(a),a,b,c)
    
except: print('error')
