try:
    a,b,c=4,7,9
    def f(a):
        a+=3
        b=1
        c=4
        return a+b+c
    
    a,b,c=6,6,2
    print(f(a),a,b,c)
    
except: print('error')
