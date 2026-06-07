try:
    a,b,c=4,7,5
    def h(b):
        a+=3
        b=4
        c=5
        return a+b+c
    
    a,b,c=0,2,9
    print(h(a),a,b,c)
    
except: print('error')
