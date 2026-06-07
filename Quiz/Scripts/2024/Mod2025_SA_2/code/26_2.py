try:
    a,b,c=1,2,4
    def f(b):
        a=5
        b+=5
        c=4
        return a+b+c
    
    a,b,c=6,9,1
    print(f(a),a,b,c)
except: print('error')
