try:
    a,b,c=3,6,4
    def h(a):
        a=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=2,1,9
    print(h(a),a,b,c)
except: print('error')
