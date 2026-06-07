try:
    a,b,c=2,7,3
    def h(a):
        a=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=8,9,6
    print(h(a),a,b,c)
    
except: print('error')
