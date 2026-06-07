try:
    a,b,c=2,9,5
    def h(b):
        a*=3
        b=5
        c=3
        return a+b+c
    
    a,b,c=3,2,4
    print(h(a),a,b,c)
    
except: print('error')
