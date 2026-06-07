try:
    a,b,c=3,4,9
    def h(b):
        a*=2
        b=4
        c=3
        return a+b+c
    
    a,b,c=7,2,1
    print(h(a),a,b,c)
    
except: print('error')
