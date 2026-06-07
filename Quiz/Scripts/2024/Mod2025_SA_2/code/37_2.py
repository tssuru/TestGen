try:
    a,b,c=0,6,2
    def g(a):
        a+=3
        b=4
        c=5
        return a+b+c
    
    a,b,c=3,2,9
    print(g(a),a,b,c)
except: print('error')
