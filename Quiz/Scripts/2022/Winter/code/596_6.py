try:
    a,b,c=0,6,5
    def h(a):
        a=5
        b=5
        c=1
        return a+b+c
    
    a,b,c=8,9,2
    print(h(a),a,b,c)
    
except: print('error')
