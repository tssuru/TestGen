try:
    a,b,c=5,9,2
    def f(a):
        global c
        a=3
        b+=4
        c=5
        return a+b+c
    
    a,b,c=7,4,6
    print(f(a),a,b,c)
    
except: print('error')
