try:
    a,b,c=0,9,2
    def h(a):
        a=5
        b*=5
        c=2
        return a+b+c
    
    a,b,c=3,4,6
    print(h(a),a,b,c)
    
except: print('error')
