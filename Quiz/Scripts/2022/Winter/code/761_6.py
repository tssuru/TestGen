try:
    a,b,c=3,0,2
    def f(a):
        global c
        a=5
        b+=4
        c=1
        return a+b+c
    
    a,b,c=8,4,5
    print(f(a),a,b,c)
    
except: print('error')
