try:
    a,b,c=9,7,6
    def f(b):
        global c
        a=1
        b+=3
        c=4
        return a+b+c
    
    a,b,c=8,1,3
    print(f(a),a,b,c)
    
except: print('error')
