try:
    a,b,c=3,5,4
    def g(b):
        a+=2
        b=1
        c=4
        return a+b+c
    
    a,b,c=9,2,7
    print(g(a),a,b,c)
    
except: print('error')
