try:
    a,b,c=1,7,4
    def g(a):
        a+=3
        b=1
        c=4
        return a+b+c
    
    a,b,c=3,5,9
    print(g(a),a,b,c)
    
except: print('error')
