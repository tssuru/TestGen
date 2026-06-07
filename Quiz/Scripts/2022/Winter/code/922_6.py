try:
    a,b,c=1,4,2
    def f(b):
        global c
        a=3
        b+=4
        c=1
        return a+b+c
    
    a,b,c=9,6,7
    print(f(a),a,b,c)
    
except: print('error')
