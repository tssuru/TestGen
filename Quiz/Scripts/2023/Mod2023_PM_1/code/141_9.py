try:
    a,b,c=8,2,7
    def h(a):
        a=2
        b=3
        c=1
        return a+b+c
    
    a,b,c=4,9,6
    print(h(a),a,b,c)
    
except: print('error')
