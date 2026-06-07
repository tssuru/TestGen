try:
    a,b,c=9,6,2
    def f(b):
        a=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=1,9,1
    print(f(a),a,b,c)
except: print('error')
