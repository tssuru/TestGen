try:
    a,b,c=8,9,4
    def h(a):
        a=2
        b=4
        c=2
        return a+b+c
    
    a,b,c=3,7,5
    print(h(a),a,b,c)
    
except: print('error')
