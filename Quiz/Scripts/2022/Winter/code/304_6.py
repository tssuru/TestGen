try:
    a,b,c=4,3,1
    def h(b):
        a=2
        b*=3
        c=5
        return a+b+c
    
    a,b,c=6,7,9
    print(h(a),a,b,c)
    
except: print('error')
