try:
    a,b,c=1,4,5
    def f(b):
        global c
        a=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=3,9,0
    print(f(a),a,b,c)
    
except: print('error')
