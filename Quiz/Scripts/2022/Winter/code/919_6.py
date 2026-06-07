try:
    a,b,c=1,0,7
    def f(b):
        global c
        a=5
        b+=2
        c=4
        return a+b+c
    
    a,b,c=6,9,0
    print(f(a),a,b,c)
    
except: print('error')
