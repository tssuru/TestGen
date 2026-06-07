try:
    a,b,c=9,5,3
    def f(b):
        global c
        a=5
        b+=3
        c=1
        return a+b+c
    
    a,b,c=1,0,2
    print(f(a),a,b,c)
    
except: print('error')
