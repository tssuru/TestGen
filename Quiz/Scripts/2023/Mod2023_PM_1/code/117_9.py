try:
    a,b,c=0,2,9
    def h(b):
        a=4
        b=3
        c=3
        return a+b+c
    
    a,b,c=4,7,2
    print(h(a),a,b,c)
    
except: print('error')
