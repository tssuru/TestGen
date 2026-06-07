try:
    a,b,c=9,5,0
    def f(b):
        global c
        a=3
        b+=2
        c=1
        return a+b+c
    
    a,b,c=8,4,6
    print(f(a),a,b,c)
    
except: print('error')
