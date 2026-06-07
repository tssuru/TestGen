try:
    a,b,c=9,0,6
    def f(a):
        a+=3
        b=4
        c=3
        return a+b+c
    
    a,b,c=8,7,0
    print(f(a),a,b,c)
    
except: print('error')
