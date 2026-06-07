try:
    a,b,c=4,9,9
    def h(b):
        a=2
        b=3
        c=1
        return a+b+c
    
    a,b,c=6,4,7
    print(h(a),a,b,c)
    
except: print('error')
