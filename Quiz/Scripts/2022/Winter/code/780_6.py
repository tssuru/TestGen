try:
    a,b,c=7,4,8
    def g(b):
        a=5
        b=4
        c=1
        return a+b+c
    
    a,b,c=1,5,9
    print(g(a),a,b,c)
    
except: print('error')
